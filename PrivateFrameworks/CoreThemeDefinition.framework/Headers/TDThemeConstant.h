/* Runtime dump - TDThemeConstant
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDThemeConstant : NSManagedObject
{
    int _identifier;
}

- (NSString *)debugDescription;
- (unsigned int)identifier;
- (void)setIdentifier:(unsigned int)arg0;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;
- (NSDictionary *)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(NSData *)arg0;
- (NSString *)constantName;
- (void)setConstantName:(NSString *)arg0;

@end
