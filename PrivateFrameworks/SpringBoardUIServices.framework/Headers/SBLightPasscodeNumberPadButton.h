/* Runtime dump - SBLightPasscodeNumberPadButton
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct CGSize)defaultSize;
+ (float)_numberPadButtonOuterCircleDiameter;
+ (struct UIEdgeInsets)paddingOutsideRing;

- (int)characterType;
- (id)stringCharacter;
- (SBLightPasscodeNumberPadButton *)initForCharacter:(unsigned int)arg0;

@end
