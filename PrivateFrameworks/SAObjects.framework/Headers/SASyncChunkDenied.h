/* Runtime dump - SASyncChunkDenied
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand>

@property (retain, nonatomic) SASyncAnchor * current;
@property (nonatomic) int errorCode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;
@property (copy, nonatomic) NSString * appId;
@property (copy, nonatomic) NSArray * callbacks;

+ (SASyncChunkDenied *)chunkDenied;
+ (NSDictionary *)chunkDeniedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (SASyncChunkDenied *)chunkDeniedWithErrorCode:(int)arg0;

- (NSString *)groupIdentifier;
- (void)setErrorCode:(int)arg0;
- (int)errorCode;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SASyncChunkDenied *)initWithErrorCode:(int)arg0;
- (SASyncAnchor *)current;
- (void)setCurrent:(SASyncAnchor *)arg0;

@end
