/* Runtime dump - NSDocumentDifferenceSizeTriple
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface NSDocumentDifferenceSizeTriple : NSObject
{
    NSDocumentDifferenceSize * _dueToRecentChangesBeforeSaving;
    NSDocumentDifferenceSize * _betweenPreservingPreviousVersionAndSaving;
    NSDocumentDifferenceSize * _betweenPreviousSavingAndSaving;
}

@property (readonly, nonatomic) NSDocumentDifferenceSize * dueToRecentChangesBeforeSaving;
@property (readonly, nonatomic) NSDocumentDifferenceSize * betweenPreservingPreviousVersionAndSaving;
@property (readonly, nonatomic) NSDocumentDifferenceSize * betweenPreviousSavingAndSaving;

- (void)dealloc;
- (NSDocumentDifferenceSizeTriple *)init;
- (NSString *)description;
- (NSDocumentDifferenceSize *)dueToRecentChangesBeforeSaving;
- (NSDocumentDifferenceSize *)betweenPreservingPreviousVersionAndSaving;
- (NSDocumentDifferenceSize *)betweenPreviousSavingAndSaving;

@end
