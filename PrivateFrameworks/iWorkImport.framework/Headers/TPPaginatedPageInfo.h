/* Runtime dump - TPPaginatedPageInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPaginatedPageInfo : TPPageInfo

@property (readonly, nonatomic) NSArray * floatingDrawableInfos;
@property (readonly, nonatomic) char isDocumentSetupPage;

- (Class)repClass;
- (Class)layoutClass;
- (char)isDocumentSetupPage;
- (struct CGRect)pageFrame;
- (NSArray *)floatingDrawableInfos;
- (UIPageController *)pageController;

@end
