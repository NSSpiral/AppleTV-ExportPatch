/* Runtime dump - TNArchivedUIState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNArchivedUIState : TSPObject
{
    TNUIState * mUIState;
}

@property (readonly, nonatomic) TNUIState * uiState;

- (TNArchivedUIState *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TNUIState *)uiState;
- (TNArchivedUIState *)initWithUIState:(NSObject *)arg0 context:(NSObject *)arg1;
- (void)dealloc;

@end
