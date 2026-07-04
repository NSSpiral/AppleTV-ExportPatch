/* Runtime dump - TSDDrawableSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDrawableSelection : TSKSelection
{
    NSSet * mInfos;
}

@property (readonly, retain, nonatomic) NSSet * infos;
@property (readonly, nonatomic) unsigned int infoCount;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) NSSet * unlockedInfos;
@property (readonly, nonatomic) unsigned int unlockedInfoCount;

+ (Class)archivedSelectionClass;

- (void)saveToArchive:(struct DrawableSelectionArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDDrawableSelection *)initWithArchive:(struct DrawableSelectionArchive *)arg0 unarchiver:(struct DrawableSelectionArchive)arg1;
- (TSDDrawableSelection *)initWithInfos:(NSSet *)arg0;
- (NSSet *)infos;
- (NSSet *)unlockedInfos;
- (char)containsKindOfClass:(Class)arg0;
- (char)containsUnlockedKindOfClass:(Class)arg0;
- (NSObject *)infosOfClass:(Class)arg0;
- (unsigned int)infoCount;
- (unsigned int)unlockedInfoCount;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDDrawableSelection *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;

@end
