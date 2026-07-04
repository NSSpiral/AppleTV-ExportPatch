/* Runtime dump - TPCanvasSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPCanvasSelection : TSWPSelection <TSDCanvasSelection>
{
    NSSet * mInfos;
    NSSet * mExcludedInfos;
    NSSet * mAdditionalInfos;
}

@property (readonly, nonatomic) int canvasSelectionKind;
@property (readonly, nonatomic) NSSet * rawInfos;
@property (readonly, nonatomic) NSSet * rawExcludedInfos;
@property (readonly, nonatomic) NSSet * rawAdditionalInfos;
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
+ (TPCanvasSelection *)emptySelection;
+ (TPCanvasSelection *)canvasSelectionFromSelection:(id)arg0;
+ (TPCanvasSelection *)canvasSelectionFromSelection:(id)arg0 withInfos:(NSSet *)arg1;
+ (TPCanvasSelection *)canvasSelectionFromCanvasSelection:(id)arg0 withToggledInfo:(NSDictionary *)arg1;
+ (TPCanvasSelection *)selectionWithInfos:(NSSet *)arg0;

- (void)saveToArchive:(struct CanvasSelectionArchive *)arg0 archiver:(NSObject *)arg1;
- (TPCanvasSelection *)initWithArchive:(struct CanvasSelectionArchive *)arg0 unarchiver:(struct CanvasSelectionArchive)arg1;
- (TPCanvasSelection *)initWithInfos:(NSSet *)arg0;
- (NSSet *)infos;
- (NSSet *)unlockedInfos;
- (char)containsKindOfClass:(Class)arg0;
- (char)containsUnlockedKindOfClass:(Class)arg0;
- (NSObject *)infosOfClass:(Class)arg0;
- (NSDictionary *)copyIncludingInfo:(NSDictionary *)arg0;
- (NSDictionary *)copyExcludingInfo:(NSDictionary *)arg0;
- (unsigned int)infoCount;
- (unsigned int)unlockedInfoCount;
- (NSObject *)copyWithNewRange:(struct _NSRange)arg0;
- (NSArray *)copyWithNewVisualRanges:(struct TSWPRangeVector *)arg0;
- (NSObject *)copyWithNewType:(int)arg0 range:(struct _NSRange)arg1;
- (NSObject *)copyWithNewType:(int)arg0 smartFieldRange:(struct _NSRange)arg1;
- (NSObject *)copyWithNewVisualTypeRange:(struct _NSRange)arg0 head:(unsigned int)arg1 tail:(unsigned int)arg2;
- (NSObject *)copyWithNewType:(int)arg0;
- (NSArray *)copyWithVisualRanges:(struct TSWPRangeVector *)arg0 startChar:(struct TSWPRangeVector)arg1 endChar:(struct _NSRange *)arg2 rightToLeft:(struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> >)arg3 sameLine:(id)arg4;
- (NSSet *)rawInfos;
- (TPCanvasSelection *)initWithType:(int)arg0 range:(struct _NSRange)arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 smartFieldRange:(struct _NSRange)arg4 leadingEdge:(char)arg5 leadingCharIndex:(unsigned int)arg6 infos:(NSSet *)arg7 excludedInfos:(id)arg8 additionalInfos:(id)arg9;
- (int)canvasSelectionKind;
- (void)p_commonCopyTo:(id)arg0;
- (TPCanvasSelection *)initWithTextSelection:(UITextSelection *)arg0 infos:(NSSet *)arg1 excludedInfos:(id)arg2 additionalInfos:(id)arg3;
- (NSSet *)rawExcludedInfos;
- (NSSet *)rawAdditionalInfos;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (TPCanvasSelection *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;

@end
