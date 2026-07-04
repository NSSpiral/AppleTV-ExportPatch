/* Runtime dump - HSUpdateResponse
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSUpdateResponse : HSResponse
{
    unsigned int _databaseRevision;
}

@property (nonatomic) unsigned int databaseRevision;

- (void)setDatabaseRevision:(unsigned int)arg0;
- (unsigned int)databaseRevision;

@end
