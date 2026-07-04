/* Runtime dump - KNArchivedUIState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNArchivedUIState : TSPObject
{
    KNUIState * mUIState;
}

@property (readonly, nonatomic) KNUIState * uiState;

- (KNArchivedUIState *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (KNUIState *)uiState;
- (KNArchivedUIState *)initWithUIState:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)validateMobileViewStateWithDocumentRoot:(NSObject *)arg0;
- (char)validateDesktopViewStateWithDocumentRoot:(NSObject *)arg0;
- (void)dealloc;

@end
