/* Runtime dump - SAAISearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAISearch : SABaseCommand <SAServerBoundCommand>

@property (nonatomic) double duration;
@property (copy, nonatomic) NSData * fingerprint;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (NSString *)groupIdentifier;
- (double)duration;
- (void)setDuration:(double)arg0;
- (NSData *)fingerprint;
- (void)setFingerprint:(NSData *)arg0;
- (NSString *)encodedClassName;

@end
