/* Runtime dump - HSArtworkRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSArtworkRequest : HSRequest

+ (NSObject *)requestWithDatabaseID:(unsigned int)arg0 itemID:(unsigned long long)arg1 size:(struct CGSize)arg2;

- (char)isConcurrent;
- (HSArtworkRequest *)initWithDatabaseID:(unsigned int)arg0 itemID:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (char)acceptsGzipEncoding;

@end
