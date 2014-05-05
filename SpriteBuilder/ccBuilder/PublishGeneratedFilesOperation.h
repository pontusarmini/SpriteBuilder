#import <Foundation/Foundation.h>
#import "PublishBaseOperation.h"
#import "CCBWarnings.h"

@class PublishFileLookup;

@interface PublishGeneratedFilesOperation : PublishBaseOperation

@property (nonatomic) CCBPublisherTargetType targetType;
@property (nonatomic, copy) NSString *outputDir;
@property (nonatomic, strong) NSMutableSet *publishedResources;
@property (nonatomic, strong) NSMutableSet *publishedSpriteSheetFiles;
@property (nonatomic, strong) PublishFileLookup *fileLookup;

@end