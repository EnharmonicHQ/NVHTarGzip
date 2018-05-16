//
//  NVHGzip.h
//  Pods
//
//  Created by Niels van Hoorn on 26/03/14.
//
//

#import <Foundation/Foundation.h>
#import "NVHFile.h"

@interface NVHGzipFile : NVHFile

- (BOOL)inflateToPath:(NSString *)destinationPath qos:(qos_class_t )qosClass error:(NSError **)error;
- (void)inflateToPath:(NSString *)destinationPath qos:(qos_class_t )qosClass completion:(void(^)(NSError *))completion;

- (BOOL)deflateFromPath:(NSString *)sourcePath qos:(qos_class_t )qosClass error:(NSError **)error;
- (void)deflateFromPath:(NSString *)sourcePath qos:(qos_class_t )qosClass completion:(void(^)(NSError *))completion;

@end
