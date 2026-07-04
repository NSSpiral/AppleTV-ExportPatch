/* Runtime dump - SAGetResultObjects
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetResultObjects : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * objectIdentifiers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSArray *)getResultObjects;
+ (NSDictionary *)getResultObjectsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)objectIdentifiers;
- (void)setObjectIdentifiers:(NSArray *)arg0;

@end
