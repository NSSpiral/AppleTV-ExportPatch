/* Runtime dump - TSCH3DDataBufferResource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DDataBufferResource : TSCH3DResource

+ (NSObject *)resourceWithBuffer:(TSCH3DDataBuffer *)arg0;
+ (CPLResource *)resource;

- (void)setBuffer:(TSCH3DDataBuffer *)arg0;
- (TSCH3DDataBufferResource *)initWithBuffer:(Buffer *)arg0;
- (void)flushMemory;
- (NSString *)description;
- (void)clear;
- (TSCH3DDataBuffer *)buffer;
- (void)setChanged:(char)arg0;
- (NSObject *)get;

@end
