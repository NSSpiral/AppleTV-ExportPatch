/* Runtime dump - TSWPDrawableAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDrawableAttachment : TSWPAttachment
{
    TSDDrawableInfo * _drawableInfo;
    int _hOffsetType;
    float _hOffset;
    int _vOffsetType;
    float _vOffset;
}

@property (readonly, retain, nonatomic) TSDDrawableInfo * drawable;
@property (nonatomic) int hOffsetType;
@property (nonatomic) float hOffset;
@property (nonatomic) int vOffsetType;
@property (nonatomic) float vOffset;
@property (readonly, nonatomic) float descent;

+ (void)setPositionerClass:(Class)arg0;

- (TSWPDrawableAttachment *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (int)elementKind;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (TSWPDrawableAttachment *)subclassInitFromUnarchiver:(NSObject *)arg0;
- (char)isAnchored;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (char)isHTMLWrap;
- (void)setParentStorage:(TSWPStorage *)arg0;
- (char)isPartitioned;
- (void)clearParentStorageForDealloc;
- (float)hOffset;
- (void)setHOffset:(float)arg0;
- (float)vOffset;
- (void)setVOffset:(float)arg0;
- (int)hOffsetType;
- (int)vOffsetType;
- (NSNumber *)objectsForStyleMigrating;
- (void)infoChanged;
- (Class)positionerClass;
- (char)specifiesEnabledKnobMask;
- (char)supportsUUID;
- (void)loadMessage:(struct DrawableAttachmentArchive *)arg0 fromUnarchiver:(struct DrawableAttachmentArchive)arg1;
- (void)saveMessage:(struct DrawableAttachmentArchive *)arg0 toArchiver:(NSArchiver *)arg1;
- (void)setHOffsetType:(int)arg0;
- (void)setVOffsetType:(int)arg0;
- (TSWPDrawableAttachment *)initWithContext:(NSObject *)arg0 drawable:(TSDDrawableInfo *)arg1;
- (id)detachDrawable;
- (void)attachDrawable:(id)arg0;
- (id)textStorages;
- (id)textRepresentationForCopy;
- (char)isDrawable;
- (void)dealloc;
- (TSWPDrawableAttachment *)init;
- (char)isEqual:(NSObject *)arg0;
- (void)invalidate;
- (float)descent;
- (char)isSearchable;
- (TSDDrawableInfo *)drawable;

@end
