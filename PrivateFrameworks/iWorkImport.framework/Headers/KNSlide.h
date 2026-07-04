/* Runtime dump - KNSlide
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlide : KNAbstractSlide <TSKModel, TSKTransformableObject>
{
    KNMasterSlide * mMaster;
    KNNoteInfo * mNote;
    NSMutableSet * mInfosUsingObjectPlaceholderGeometry;
}

@property (retain, nonatomic) KNMasterSlide * master;
@property (retain, nonatomic) KNNoteInfo * note;
@property (readonly, nonatomic) char slideObjectsLayerWithMaster;
@property (readonly, nonatomic) NSSet * infosUsingObjectPlaceholderGeometry;
@property (readonly, nonatomic) char areInfosUsingObjectPlaceholderGeometry;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)blankSlideWithSlideNode:(KNSlideNode *)arg0 master:(KNMasterSlide *)arg1 andShow:(id)arg2;

- (NSString *)packageLocator;
- (KNSlide *)initFromUnarchiver:(NSObject *)arg0;
- (char)isComponentRoot;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct SlideArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct SlideArchive *)arg0 unarchiver:(struct SlideArchive)arg1;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (NSArray *)infosToDisplay;
- (void)addMapForStorage:(id)arg0 forHyperlink:(OADHyperlink *)arg1;
- (void)removeMapForStorage:(id)arg0 forHyperlink:(OADHyperlink *)arg1;
- (void)insertDrawables:(id)arg0 atIndex:(unsigned int)arg1 dolcContext:(NSObject *)arg2;
- (NSString *)defaultTitlePlaceholderWithContext:(NSObject *)arg0;
- (NSString *)defaultBodyPlaceholderWithContext:(NSObject *)arg0;
- (NSString *)defaultSlideNumberPlaceholderWithContext:(NSObject *)arg0;
- (void)removeDrawable:(GQHPagesFloatingDrawable *)arg0;
- (KNSlide *)initWithSlideNode:(KNSlideNode *)arg0 master:(KNMasterSlide *)arg1 andShow:(id)arg2;
- (NSDictionary *)infoCorrespondingToMasterInfo:(NSDictionary *)arg0;
- (char)slideObjectsLayerWithMaster;
- (void)setToMaster:(PDSlideMaster *)arg0;
- (char)p_oneOrMoreDrawablesMayHaveImplicitBuildEventsInDrawables:(id)arg0;
- (char)p_urlIsSlideSpecific:(id)arg0;
- (NSURL *)p_slideNodeUUIDStringFromURL:(NSURL *)arg0;
- (void)addInfoUsingObjectPlaceholderGeometry:(NSObject *)arg0;
- (void)removeInfoUsingObjectPlaceholderGeometry:(NSObject *)arg0;
- (char)areInfosUsingObjectPlaceholderGeometry;
- (void)setToMasterUsingBlob:(id)arg0;
- (char)isNoteSelectionPath:(NSString *)arg0;
- (void)updateSlideSpecificLinkMapForInfo:(NSDictionary *)arg0 newHyperlink:(OADHyperlink *)arg1;
- (void)updateSlideSpecificHyperlinkMapForStorage:(id)arg0 oldHyperlink:(id)arg1 newHyperlink:(OADHyperlink *)arg2;
- (NSSet *)infosUsingObjectPlaceholderGeometry;
- (KNNoteInfo *)note;
- (void)setNote:(KNNoteInfo *)arg0;
- (void)acceptVisitor:(NSObject *)arg0;
- (void)dealloc;
- (void)setMaster:(KNMasterSlide *)arg0;
- (KNMasterSlide *)master;
- (NSEnumerator *)childEnumerator;

@end
