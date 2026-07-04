/* Runtime dump - SAFmfGeoFenceSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfGeoFenceSnippet : SAUISnippet

@property (retain, nonatomic) SAFmfGeoFence * aceFmfGeoFence;
@property (copy, nonatomic) NSNumber * enable;
@property (copy, nonatomic) NSString * fenceType;
@property (copy, nonatomic) NSNumber * oneTimeOnly;
@property (copy, nonatomic) NSURL * searchContext;

+ (SAFmfGeoFenceSnippet *)geoFenceSnippet;
+ (NSDictionary *)geoFenceSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)enable;
- (void)setSearchContext:(NSURL *)arg0;
- (NSURL *)searchContext;
- (NSString *)encodedClassName;
- (void)setEnable:(NSNumber *)arg0;
- (NSString *)fenceType;
- (void)setFenceType:(NSString *)arg0;
- (NSNumber *)oneTimeOnly;
- (void)setOneTimeOnly:(NSNumber *)arg0;
- (SAFmfGeoFence *)aceFmfGeoFence;
- (void)setAceFmfGeoFence:(SAFmfGeoFence *)arg0;

@end
