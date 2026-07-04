/* Runtime dump - ML3VirtualTable
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3VirtualTable : NSObject <ML3DatabaseModuleContext>
{
    NSString * _virtualTableName;
    ML3DatabaseModule * _module;
    <ML3VirtualTableDelegate> * _delegate;
    ML3DatabaseTable * _databaseTable;
    ML3DatabaseConnection * _connection;
    struct shared_ptr<ML3VirtualTableDataSource> _dataSource;
}

@property (nonatomic) struct shared_ptr<ML3VirtualTableDataSource> dataSource;
@property (weak, nonatomic) <ML3VirtualTableDelegate> * delegate;
@property (readonly, nonatomic) ML3DatabaseTable * databaseTable;
@property (readonly, nonatomic) ML3DatabaseConnection * connection;
@property (readonly, nonatomic) NSString * name;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDataSource:(struct shared_ptr<ML3VirtualTableDataSource>)arg0;
- (void)setDelegate:(<ML3VirtualTableDelegate> *)arg0;
- (struct shared_ptr<ML3VirtualTableDataSource>)dataSource;
- (<ML3VirtualTableDelegate> *)delegate;
- (NSString *)name;
- (void).cxx_construct;
- (char)unregister;
- (void).cxx_destruct;
- (ML3DatabaseConnection *)connection;
- (char)registerWithConnection:(ML3DatabaseConnection *)arg0;
- (ML3DatabaseTable *)databaseTable;
- (ML3VirtualTable *)initWithDatabaseTable:(ML3DatabaseTable *)arg0;

@end
