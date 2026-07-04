/* Runtime dump - SASyncChunkAccepted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (retain, nonatomic) SASyncAnchor * current;

+ (SASyncChunkAccepted *)chunkAccepted;
+ (NSDictionary *)chunkAcceptedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SASyncAnchor *)current;
- (void)setCurrent:(SASyncAnchor *)arg0;

@end
