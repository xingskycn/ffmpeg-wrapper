//
//  Transcoder.h
//  ffmpeg-wrapper
//
//  Created by Min Kim on 10/7/13.
//  Copyright (c) 2013 iFactory Lab Limited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "libavformat/avformat.h"

@interface Transcoder : NSObject

/*
@property (atomic, retain) NSMutableArray *inputFiles;
@property (atomic, retain) NSMutableArray *outputFiles;
*/

- (void)openInputFile:(NSString *)file;
- (void)openOutputFile:(NSString *)file
        withVideoCodec:(NSString *)videoCodec
            audioCodec:(NSString *)audioCodec;
- (int)transcode:(NSError **)nsError;

@end
