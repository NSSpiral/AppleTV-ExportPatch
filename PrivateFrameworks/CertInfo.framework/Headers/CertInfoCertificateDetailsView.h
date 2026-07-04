/* Runtime dump - CertInfoCertificateDetailsView
 * Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateDetailsView : UIView <UITableViewDataSource>
{
    UITableView * _tableView;
    NSMutableArray * _tableSections;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)layoutSubviews;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (void).cxx_destruct;
- (void)appendInfoFromCertView:(NSObject *)arg0;
- (CertInfoCertificateDetailsView *)initWithFrame:(struct CGRect)arg0 certificateProperties:(struct CGSize)arg1;
- (id)_cellInfosForSection:(id)arg0;
- (id)_sectionInfoForCertSection:(id)arg0 title:(NSString *)arg1;
- (NSDictionary *)_sectionsFromProperties:(NSDictionary *)arg0;
- (NSString *)_titleForIndexPath:(NSIndexPath *)arg0;
- (NSString *)_detailForIndexPath:(NSIndexPath *)arg0;

@end
