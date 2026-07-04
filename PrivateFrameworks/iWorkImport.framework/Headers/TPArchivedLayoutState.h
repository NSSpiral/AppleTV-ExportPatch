/* Runtime dump - TPArchivedLayoutState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPArchivedLayoutState : TSPObject <TPArchivedLayoutStateProtocol>
{
    unsigned int _sectionIndex;
    unsigned int _sectionPageIndex;
    unsigned int _documentPageIndex;
    unsigned int _lastPageCount;
    NSArray * _sectionHints;
    unsigned int _bodyLength;
    NSSet * _missingFonts;
}

- (TPArchivedLayoutState *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)p_reset;
- (void)readLayoutStateWithConsumer:(NSObject *)arg0;
- (void)captureLayoutStateWithProvider:(NSObject *)arg0;
- (void)dealloc;

@end
