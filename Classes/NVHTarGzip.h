//
//  NVHTarGzip.h
//  Pods
//
//  Created by Niels van Hoorn on 26/03/14.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(TarGzip)
@interface NVHTarGzip : NSObject

+ (NVHTarGzip *)sharedInstance;

// Sync API
- (BOOL)unTarFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath error:(NSError ** __nullable)error;
- (BOOL)unGzipFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath error:(NSError ** __nullable)error;
- (BOOL)unTarGzipFileAtPath:(NSString*)sourcePath toPath:(NSString*)destinationPath error:(NSError ** __nullable)error;
- (BOOL)tarFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath error:(NSError ** __nullable)error;
- (BOOL)gzipFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath error:(NSError ** __nullable)error;
- (BOOL)tarGzipFileAtPath:(NSString*)sourcePath toPath:(NSString *)destinationPath error:(NSError ** __nullable)error;

// Async API
- (void)unTarFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath completion:(void(^)(NSError * __nullable))completion;
- (void)unGzipFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath completion:(void(^)(NSError * __nullable))completion;
- (void)unTarGzipFileAtPath:(NSString*)sourcePath toPath:(NSString *)destinationPath completion:(void(^)(NSError * __nullable))completion;
- (void)tarFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath completion:(void(^)(NSError * __nullable))completion;
- (void)gzipFileAtPath:(NSString *)sourcePath toPath:(NSString *)destinationPath completion:(void(^)(NSError * __nullable))completion;
- (void)tarGzipFileAtPath:(NSString*)sourcePath toPath:(NSString *)destinationPath completion:(void(^)(NSError* __nullable))completion;

NS_ASSUME_NONNULL_END

@end
