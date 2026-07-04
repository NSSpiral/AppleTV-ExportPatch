/* Runtime dump - PptHyperlinkBlock
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PptHyperlinkBlock : NSObject
{
    ESDContainer * mInteractiveInfoContainerHolder;
    ESDObject * mTxInteractiveInfoAtomHolder;
}

- (struct PptTxInteracInfoAtom *)txtInteractiveInfoAtom;
- (id)interactiveInfoContainerHolder;
- (void)setInteractiveInfoContainerHolder:(id)arg0;
- (void)setTxInteractiveInfoAtomHolder:(id)arg0;

@end
