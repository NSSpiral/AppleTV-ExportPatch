/* Runtime dump - TNPersistentChartMediator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPersistentChartMediator : TSCHPersistentChartMediator <TSKDocumentObject, TSCECalculationEngineRegistration>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TNPersistentChartMediator *)initFromUnarchiver:(NSObject *)arg0;
- (void)willModify;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg0;
- (void)unregisterFromCalculationEngine:(id)arg0;
- (char)registerLast;
- (id)objectToArchiveInDependencyTracker;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;

@end
