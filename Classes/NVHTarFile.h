//
//  NVHTarFile.h
//  Pods
//
//  Created by Niels van Hoorn on 26/03/14.
//
//

#import <Foundation/Foundation.h>
#import "NVHFile.h"

@interface NVHTarFile : NVHFile

- (BOOL)createFilesAndDirectoriesAtPath:(NSString *)destinationPath qos:(qos_class_t )qosClass error:(NSError **)error;
- (void)createFilesAndDirectoriesAtPath:(NSString *)destinationPath qos:(qos_class_t )qosClass completion:(void(^)(NSError*))completion;

- (BOOL)packFilesAndDirectoriesAtPath:(NSString *)sourcePath qos:(qos_class_t )qosClass error:(NSError **)error;
- (void)packFilesAndDirectoriesAtPath:(NSString *)sourcePath qos:(qos_class_t )qosClass completion:(void (^)(NSError *))completion;

@end
