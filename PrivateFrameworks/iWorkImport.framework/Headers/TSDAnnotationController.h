/* Runtime dump - TSDAnnotationController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAnnotationController : NSObject

@property (readonly, nonatomic) char hasAnnotations;
@property (readonly, nonatomic) NSString * annotationNavigationString;
@property (readonly, nonatomic) unsigned int annotationCount;
@property (nonatomic) char textSelectionChangeShouldDismissAnnotations;

+ (float)commentFontSize;

- (id)annotationToolTipTextGoToPrevious;
- (id)annotationToolTipTextGoToNext;
- (id)annotationMenuItemTextShowPrevious;
- (id)annotationMenuItemTextShowNext;
- (NSString *)annotationNavigationString;
- (unsigned int)annotationCount;
- (void)setTextSelectionChangeShouldDismissAnnotations:(char)arg0;
- (char)textSelectionChangeShouldDismissAnnotations;
- (void)unregisterDelegate:(NSObject *)arg0;
- (void)nextAnnotation:(NSObject *)arg0;
- (void)previousAnnotation:(NSObject *)arg0;
- (void)updateCurrentAnnotation:(NSObject *)arg0;
- (void)willShowAnnotation:(NSObject *)arg0;
- (void)didShowAnnotation:(NSObject *)arg0;
- (void)commitCommentText:(NSString *)arg0 forAnnotation:(NSObject *)arg1;
- (void)setFilteredAuthors:(NSSet *)arg0;
- (void)invalidateAnnotationAuthors;
- (void)registerDelegate:(NSObject *)arg0;
- (char)hasAnnotations;

@end
