/* Runtime dump - KNSlideCollectionSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideCollectionSelection : TSKSelection
{
    NSOrderedSet * mSlideNodes;
    KNSlideNode * mSlideNodeToEdit;
}

@property (readonly, nonatomic) NSOrderedSet * slideNodes;
@property (readonly, nonatomic) KNSlideNode * slideNodeToEdit;
@property (readonly, nonatomic) char empty;

+ (Class)archivedSelectionClass;

- (void)saveToArchive:(struct SlideCollectionSelectionArchive *)arg0 archiver:(NSObject *)arg1;
- (KNSlideCollectionSelection *)initWithArchive:(struct SlideCollectionSelectionArchive *)arg0 unarchiver:(struct SlideCollectionSelectionArchive)arg1;
- (NSOrderedSet *)slideNodes;
- (KNSlideNode *)slideNodeToEdit;
- (KNSlideCollectionSelection *)initWithSlideNodes:(NSOrderedSet *)arg0 slideNodeToEdit:(KNSlideNode *)arg1;
- (KNSlideCollectionSelection *)initWithSlideNode:(KNSlideNode *)arg0;
- (void)dealloc;
- (KNSlideCollectionSelection *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)isEmpty;

@end
