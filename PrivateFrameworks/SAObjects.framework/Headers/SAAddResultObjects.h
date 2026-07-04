/* Runtime dump - SAAddResultObjects
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAddResultObjects : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray * objects;

+ (NSArray *)addResultObjects;
+ (NSDictionary *)addResultObjectsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSArray *)objects;
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (void)setObjects:(NSArray *)arg0;

@end
