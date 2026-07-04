/* Runtime dump - UICompletionTable
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UICompletionTablePrivate * _private;
}

@property (nonatomic) id delegate;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) struct UIEdgeInsets scrollIndicatorInsets;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIImage *)_shadowImage;
+ (UIFont *)_cellFont;

- (UICompletionTable *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)reloadData;
- (void)layoutSubviews;
- (NSString *)dequeueReusableCellWithIdentifier:(NSString *)arg0;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSObject *)delegate;
- (struct UIEdgeInsets)contentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg0;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)scrollIndicatorInsets;
- (id)_completionForRow:(int)arg0;
- (void)setTopStrokeColor:(UIColor *)arg0;

@end
