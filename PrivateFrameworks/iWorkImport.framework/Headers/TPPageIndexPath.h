/* Runtime dump - TPPageIndexPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageIndexPath : NSObject <NSCopying>
{
    unsigned int _sectionIndex;
    unsigned int _pageIndex;
}

@property (nonatomic) unsigned int sectionIndex;
@property (nonatomic) unsigned int pageIndex;

- (TPPageIndexPath *)initWithSectionIndex:(unsigned int)arg0 pageIndex:(unsigned int)arg1;
- (TPPageIndexPath *)init;
- (NSString *)description;
- (TPPageIndexPath *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)pageIndex;
- (void)setPageIndex:(unsigned int)arg0;
- (unsigned int)sectionIndex;
- (void)setSectionIndex:(unsigned int)arg0;

@end
