/* Runtime dump - PSSpecifierAction
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierAction : NSObject
{
    id _getter;
    id _setter;
}

@property (copy, nonatomic) id getter;
@property (copy, nonatomic) id setter;

+ (PSSpecifierAction *)actionWithGetter:(SEL)arg0 setter:(/* block */ id)arg1;
+ (NSObject *)actionWithBoolDetailClass:(Class)arg0;

- (SEL)setter;
- (void)setSetter:(SEL)arg0;
- (void)dealloc;
- (void)setGetter:(SEL)arg0;
- (SEL)getter;

@end
