//
//  FileDescriptorPool.h
//  MHMComsDataModel
//
//  Created by Jonathan Saggau on 6/29/18.
//  Copyright © 2018 Maharam. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FileHandlePool : NSObject

@property (nonatomic, readonly) NSString *filePath;

-(instancetype)initWithFilePath: (NSString *)filePath handleCount:(NSUInteger)count;

-(NSFileHandle *)nextHandle;

@end

NS_ASSUME_NONNULL_END
