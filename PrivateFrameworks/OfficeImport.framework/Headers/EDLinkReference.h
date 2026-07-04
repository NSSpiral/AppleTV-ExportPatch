/* Runtime dump - EDLinkReference
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDLinkReference : NSObject
{
    unsigned int mLinkIndex;
    unsigned int mFirstSheetIndex;
    unsigned int mLastSheetIndex;
}

+ (NSObject *)linkReferenceWithLinkIndex:(unsigned int)arg0 firstSheetIndex:(unsigned int)arg1 lastSheetIndex:(unsigned int)arg2;

- (EDLinkReference *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (EDLinkReference *)initWithLinkIndex:(unsigned int)arg0 firstSheetIndex:(unsigned int)arg1 lastSheetIndex:(unsigned int)arg2;
- (char)isEqualToLinkReference:(NSObject *)arg0;
- (unsigned int)firstSheetIndex;
- (void)setFirstSheetIndex:(unsigned int)arg0;
- (unsigned int)lastSheetIndex;
- (void)setLastSheetIndex:(unsigned int)arg0;
- (unsigned int)linkIndex;
- (void)setLinkIndex:(unsigned int)arg0;
- (BOOL)isWorkbookLevelReference;

@end
