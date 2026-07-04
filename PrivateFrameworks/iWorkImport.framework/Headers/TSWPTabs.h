/* Runtime dump - TSWPTabs
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTabs : NSObject <NSCopying, NSFastEnumeration, TSDMixing>
{
    NSMutableArray * _tabs;
}

+ (NSMutableArray *)tabs;

- (void)saveToArchive:(struct TabsArchive *)arg0 archiver:(NSObject *)arg1;
- (TSWPTabs *)initWithArchive:(struct TabsArchive *)arg0 unarchiver:(struct TabsArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (NSObject *)tabAtIndex:(unsigned int)arg0;
- (TSWPTabs *)initWithTabs:(NSMutableArray *)arg0;
- (NSObject *)tabAtPosition:(float)arg0;
- (NSObject *)tabAfterPosition:(float)arg0;
- (void)removeTabAtIndex:(unsigned int)arg0;
- (void)setPosition:(float)arg0 forTab:(id)arg1;
- (unsigned int)indexForTabWithPosition:(float)arg0 alignment:(int)arg1 leader:(NSString *)arg2;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)count;
- (TSWPTabs *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSWPTabs *)copyWithZone:(struct _NSZone *)arg0;
- (void)insertTab:(id)arg0;

@end
