/* Runtime dump - CHDAutomaticObject
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDAutomaticObject : NSObject
{
    NSString * mName;
}

+ (CHDAutomaticObject *)automaticFill;
+ (CHDAutomaticObject *)automaticStroke;
+ (CHDAutomaticObject *)automaticEffects;

- (void)dealloc;
- (CHDAutomaticObject *)copyWithZone:(struct _NSZone *)arg0;
- (CHDAutomaticObject *)initWithName:(NSString *)arg0;

@end
