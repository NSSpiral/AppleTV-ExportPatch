/* Runtime dump - PFZlibDataCompression
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFZlibDataCompression : NSObject

+ (NSData *)compressData:(NSData *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (NSData *)decompressData:(NSData *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;

- (PFZlibDataCompression *)init;

@end
