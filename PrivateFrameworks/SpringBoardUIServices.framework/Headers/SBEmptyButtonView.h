/* Runtime dump - SBEmptyButtonView
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBEmptyButtonView : UIView <TPNumberPadButtonProtocol>
{
    unsigned int _char;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property unsigned int character;

- (struct CGSize)intrinsicContentSize;
- (unsigned int)character;
- (void)setCharacter:(unsigned int)arg0;
- (SBEmptyButtonView *)initForCharacter:(unsigned int)arg0;

@end
