/* Runtime dump - EDOfficeArtClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient>
{
    EDSheet * mSheet;
    id mClientState;
    EDAnchor * mAnchor;
    EDTextBox * mTextBox;
    EDComment * mComment;
    NSMutableDictionary * mTableModels;
    struct CGRect mBounds;
    BOOL mIsBoundsSet;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg0;
- (char)hasText;
- (void).cxx_construct;
- (NSString *)anchor;
- (void)setAnchor:(PLImageViewWithAnimatedAnchor *)arg0;
- (SADynamiteClientState *)clientState;
- (char)hasBounds;
- (void)setComment:(MSASComment *)arg0;
- (GQHTextBox *)textBox;
- (BOOL)areBoundsSet;
- (void)setSheet:(NSObject *)arg0;
- (void)setClientState:(NSObject *)arg0;
- (id)tableModels;
- (void)setTableModels:(id)arg0;
- (void)setTextBox:(GQHTextBox *)arg0;
- (NSString *)comment;
- (TNSheet *)sheet;

@end
