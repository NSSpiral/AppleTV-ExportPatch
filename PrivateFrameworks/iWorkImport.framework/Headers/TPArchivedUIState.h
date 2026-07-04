/* Runtime dump - TPArchivedUIState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPArchivedUIState : TSPObject
{
    TPArchivedLayoutState * _layoutState;
    TPArchivedViewState * _viewState;
}

@property (readonly, nonatomic) TPArchivedLayoutState * layoutState;
@property (readonly, nonatomic) TPArchivedViewState * viewState;

- (TPArchivedUIState *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)dealloc;
- (TPArchivedUIState *)initWithContext:(TSPObjectContext *)arg0;
- (TPArchivedLayoutState *)layoutState;
- (TPArchivedViewState *)viewState;

@end
