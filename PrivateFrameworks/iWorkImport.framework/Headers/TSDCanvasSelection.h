/* Runtime dump - TSDCanvasSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCanvasSelection : TSKSelection <TSDCanvasSelection>
{
    NSSet * mInfos;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSSet * infos;
@property (readonly, nonatomic) unsigned int infoCount;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) NSSet * unlockedInfos;
@property (readonly, nonatomic) unsigned int unlockedInfoCount;

+ (Class)archivedSelectionClass;
+ (TSDCanvasSelection *)emptySelection;

- (void)saveToArchive:(struct CanvasSelectionArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDCanvasSelection *)initWithArchive:(struct CanvasSelectionArchive *)arg0 unarchiver:(struct CanvasSelectionArchive)arg1;
- (TSDCanvasSelection *)initWithInfos:(NSSet *)arg0;
- (NSSet *)infos;
- (NSSet *)unlockedInfos;
- (char)containsKindOfClass:(Class)arg0;
- (char)containsUnlockedKindOfClass:(Class)arg0;
- (NSObject *)infosOfClass:(Class)arg0;
- (NSDictionary *)copyIncludingInfo:(NSDictionary *)arg0;
- (NSDictionary *)copyExcludingInfo:(NSDictionary *)arg0;
- (unsigned int)infoCount;
- (unsigned int)unlockedInfoCount;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDCanvasSelection *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;

@end
