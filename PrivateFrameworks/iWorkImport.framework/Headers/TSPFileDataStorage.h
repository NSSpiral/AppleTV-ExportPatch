/* Runtime dump - TSPFileDataStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFileDataStorage : TSPStreamDataStorage

- (void)performIOChannelReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (NSDictionary *)bookmarkDataWithOptions:(unsigned int)arg0;
- (NSDictionary *)AVAssetWithOptions:(NSDictionary *)arg0 forData:(NSData *)arg1;
- (void)performReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (char)isReadable;
- (unsigned long long)encodedLength;

@end
