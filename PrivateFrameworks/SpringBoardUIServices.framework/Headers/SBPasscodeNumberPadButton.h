/* Runtime dump - SBPasscodeNumberPadButton
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct CGSize)defaultSize;
+ (float)_numberPadButtonOuterCircleDiameter;
+ (int)_characterTypeForCharacter:(unsigned int)arg0;
+ (SBPasscodeNumberPadButton *)_stringCharacterForCharacter:(unsigned int)arg0;
+ (struct UIEdgeInsets)paddingOutsideRing;

- (int)characterType;
- (id)stringCharacter;
- (SBPasscodeNumberPadButton *)initForCharacter:(unsigned int)arg0;

@end
