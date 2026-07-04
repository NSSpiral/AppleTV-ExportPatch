/* Runtime dump - WXOAVReadState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXOAVReadState : OAVReadState
{
    WXReadState * mWxState;
    WDParagraph * mParagraph;
    NSMutableDictionary * mNextVmlShapeIdToTextBoxMap;
}

- (void)dealloc;
- (id)currentParagraph;
- (void)setCurrentParagraph:(id)arg0;
- (NSObject *)wxReadState;
- (NSObject *)nextVmlShapeIdToTextBoxMap;
- (WXOAVReadState *)initWithWXReadState:(NSObject *)arg0;

@end
