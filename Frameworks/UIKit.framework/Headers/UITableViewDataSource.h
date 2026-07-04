/* Runtime dump - UITableViewDataSource
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, NSCoding>
{
    NSArray * _sections;
}

@property (copy, nonatomic) NSArray * sections;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)staticDataSourceWithSections:(NSArray *)arg0;

- (void)dealloc;
- (UITableViewDataSource *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (float)tableView:(UITableView *)arg0 heightForFooterInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 viewForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 viewForFooterInSection:(int)arg1;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 indentationLevelForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 titleForFooterInSection:(int)arg1;
- (char)tableView:(UITableView *)arg0 canEditRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 canMoveRowAtIndexPath:(NSIndexPath *)arg1;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;

@end
