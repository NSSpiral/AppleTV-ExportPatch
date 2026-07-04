/* Runtime dump - TSWPAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPAttachment : TSPObject <TSKDocumentObject, TSDOwningAttachment, TSPCopying>
{
    TSWPStorage * _parentStorage;
}

@property (nonatomic) TSWPStorage * parentStorage;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isDrawable;
@property (readonly, nonatomic) char isAnchored;
@property (readonly, nonatomic) char isPartitioned;
@property (readonly, nonatomic) char isAttachedToBodyText;
@property (readonly, nonatomic) Class positionerClass;
@property (readonly, nonatomic) char isSearchable;
@property (readonly, nonatomic) char specifiesEnabledKnobMask;

+ (int)attributeArrayKind;
+ (TSWPAttachment *)allocWithZone:(struct _NSZone *)arg0;

- (NSString *)copyWithContext:(NSObject *)arg0;
- (int)elementKind;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (char)isAnchored;
- (char)isAttachedToBodyText;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (char)changesWithPageNumber;
- (char)changesWithPageCount;
- (void)setParentStorage:(TSWPStorage *)arg0;
- (unsigned int)findCharIndex;
- (char)isPartitioned;
- (TSWPStorage *)parentStorage;
- (NSNumber *)objectsForStyleMigrating;
- (void)infoChanged;
- (Class)positionerClass;
- (char)specifiesEnabledKnobMask;
- (NSObject *)topLevelAttachment;
- (char)supportsUUID;
- (void)migrateStyleWithDocumentRoot:(NSObject *)arg0;
- (char)isDrawable;
- (char)isEqual:(NSObject *)arg0;
- (TSWPAttachment *)initWithContext:(TSPObjectContext *)arg0;
- (char)isSearchable;

@end
