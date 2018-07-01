//
//  FileHandlePool.m
//  MHMComsDataModel
//
//  Created by Jonathan Saggau on 6/29/18.
//  Copyright © 2018 Maharam. All rights reserved.
//

#import "FileHandlePool.h"

@interface FileHandlePool ()

@property (nonatomic, readwrite) NSString *filePath;
@property (nonatomic) NSArray <NSFileHandle *> *handles;
@property (nonatomic) NSUInteger nextHandleIndex;
@property (nonatomic) NSUInteger handleCount;
@end

@implementation FileHandlePool

-(instancetype)initWithFilePath: (NSString *)filePath handleCount:(NSUInteger)count {
    self = [super init];
    if (self) {
        NSMutableArray *handles = [NSMutableArray arrayWithCapacity:count];
        for (NSUInteger i=0; i<count; i++) {
            NSFileHandle *handle = [NSFileHandle fileHandleForReadingAtPath:filePath];
            [handles addObject:handle];
        }

        _handles = [NSArray arrayWithArray:handles];
        _filePath = [filePath copy];
        _nextHandleIndex = 0;
        _handleCount = count;
    }
    return self;
}

-(NSFileHandle *)nextHandle {
    NSFileHandle *next = self.handles[self.nextHandleIndex];
    NSUInteger count = self.handleCount;
    NSUInteger nextIndex = self.nextHandleIndex;
    nextIndex += 1;
    nextIndex = nextIndex % count;
    self.nextHandleIndex = nextIndex;
    return next;
}

- (void)dealloc
{
    for (NSFileHandle *handle in self.handles) {
        [handle closeFile];
    }
}

@end
