/* Runtime dump - WDAContent
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDAContent : NSObject <OADClient, OADTextClient>
{
    WDAAnchor * mAnchor;
    WDATextBox * mTextBox;
    OADDrawable * mDrawable;
    int mTextType;
}

@property (readonly, nonatomic) WDAAnchor * anchor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)classForType:(unsigned short)arg0;

- (void)dealloc;
- (struct CGRect)bounds;
- (WDAContent *)init;
- (void)setBounds:(struct CGRect)arg0;
- (NSString *)description;
- (char)hasText;
- (WDAAnchor *)anchor;
- (char)floating;
- (char)hasBounds;
- (TSDDrawableInfo *)drawable;
- (BOOL)isShape;
- (GQHTextBox *)textBox;
- (int)textType;
- (void)setDrawable:(TSDDrawableInfo *)arg0;
- (void)setTextType:(int)arg0;
- (id)createAnchor;
- (void)clearAnchor;
- (NSObject *)createTextBoxWithDocument:(NSObject *)arg0 textType:(int)arg1;
- (void)setTextBox:(GQHTextBox *)arg0 document:(NSObject *)arg1;
- (BOOL)isLine;
- (BOOL)isTopLevelObject;

@end
