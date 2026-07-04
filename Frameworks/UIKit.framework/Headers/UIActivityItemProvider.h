/* Runtime dump - UIActivityItemProvider
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource>
{
    id _placeholderItem;
    NSString * _activityType;
    NSString * _status;
    float _progress;
    id _providedItem;
}

@property (retain, nonatomic) id placeholderItem;
@property (readonly, nonatomic) NSString * activityType;
@property (copy, nonatomic) NSString * status;
@property (nonatomic) float progress;
@property (retain, nonatomic) id providedItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void *)item;
- (void)setProgress:(float)arg0;
- (float)progress;
- (UIActivityItemProvider *)initWithPlaceholderItem:(NSObject *)arg0;
- (NSString *)activityType;
- (void)main;
- (NSObject *)placeholderItem;
- (NSObject *)activityViewControllerPlaceholderItem:(UIActivityViewController *)arg0;
- (NSObject *)activityViewController:(BRController *)arg0 itemForActivityType:(NSString *)arg1;
- (void)setPlaceholderItem:(NSObject *)arg0;
- (void)setProvidedItem:(NSObject *)arg0;
- (NSObject *)providedItem;
- (void)_setActivityType:(NSObject *)arg0;
- (NSString *)status;
- (void)setStatus:(NSString *)arg0;

@end
