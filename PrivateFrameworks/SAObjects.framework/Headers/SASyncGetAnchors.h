/* Runtime dump - SASyncGetAnchors
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncGetAnchors : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * sources;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SASyncGetAnchors *)getAnchors;
+ (NSDictionary *)getAnchorsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setSources:(NSArray *)arg0;
- (NSArray *)sources;
- (NSString *)encodedClassName;

@end
