/* Runtime dump - IKJSNavigationDocument
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument>
{
    <IKAppNavigationController> * _navigationControllerDelegate;
}

@property (readonly, weak, nonatomic) <IKAppNavigationController> * navigationControllerDelegate;
@property (readonly, retain, nonatomic) NSArray * documents;

- (void)clear;
- (void).cxx_destruct;
- (void)removeDocument:(NSObject *)arg0;
- (NSArray *)documents;
- (IKJSNavigationDocument *)initWithAppContext:(<IKApplication> *)arg0 navigationController:(UINavigationController *)arg1;
- (<IKAppNavigationController> *)navigationControllerDelegate;
- (NSObject *)_makeAppDocumentWithDocument:(NSObject *)arg0;
- (void)pushDocument:(NSObject *)arg0 :(id)arg1;
- (void)popDocument;
- (void)popToDocument:(NSObject *)arg0;
- (void)popToRootDocument;
- (void)insertBeforeDocument:(NSObject *)arg0 :(id)arg1 :(id)arg2;
- (void)replaceDocument:(NSObject *)arg0 :(id)arg1 :(id)arg2;

@end
