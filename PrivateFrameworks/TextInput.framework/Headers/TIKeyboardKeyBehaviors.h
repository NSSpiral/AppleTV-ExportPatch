/* Runtime dump - TIKeyboardKeyBehaviors
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardKeyBehaviors : NSObject
{
    unsigned int _spaceKeyBehavior;
    unsigned int _returnKeyBehavior;
}

@property (nonatomic) unsigned int spaceKeyBehavior;
@property (nonatomic) unsigned int returnKeyBehavior;

+ (NSString *)behaviorForSpaceKey:(unsigned int)arg0 forReturnKey:(unsigned int)arg1;

- (unsigned int)spaceKeyBehavior;
- (unsigned int)returnKeyBehavior;
- (TIKeyboardKeyBehaviors *)initWithSpaceKeyBehavior:(unsigned int)arg0 returnKeyBehavior:(unsigned int)arg1;
- (void)setSpaceKeyBehavior:(unsigned int)arg0;
- (void)setReturnKeyBehavior:(unsigned int)arg0;

@end
