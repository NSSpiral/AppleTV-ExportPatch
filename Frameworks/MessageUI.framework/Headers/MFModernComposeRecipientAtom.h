/* Runtime dump - MFModernComposeRecipientAtom
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernComposeRecipientAtom : MFModernAtomView
{
    <MFComposeRecipientAtomDelegate> * _delegate;
    MFComposeRecipient * _recipient;
    UITextInputTraits * _traits;
    id _wasSelectedWhenTouchesBegan;
    id _touchesWereCancelled;
}

@property (readonly, nonatomic) MFComposeRecipient * recipient;
@property (nonatomic) <MFComposeRecipientAtomDelegate> * delegate;

- (MFModernComposeRecipientAtom *)initWithFrame:(struct CGRect)arg0 recipient:(struct CGSize)arg1 presentationOptions:(unsigned int)arg2;
- (void)handleTouchAndHold;
- (MFModernComposeRecipientAtom *)initWithFrame:(struct CGRect)arg0 recipient:(struct CGSize)arg1;
- (void)dealloc;
- (void)setDelegate:(<MFComposeRecipientAtomDelegate> *)arg0;
- (<MFComposeRecipientAtomDelegate> *)delegate;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesMoved:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (NSArray *)keyCommands;
- (void)moveRight:(id)arg0;
- (void)moveLeft:(id)arg0;
- (MFComposeRecipient *)recipient;

@end
