#ifndef __MULTITRACKER_H__
#define __MULTITRACKER_H__
 
#include "darknet.h"
#include "darknet_exp.h"

#ifdef __cplusplus
extern "C" {
#endif

int track_bb_in_frame(tAnnInfo* apBoundingBoxesIn, tFrameInfo* pFBase, tFrameInfo* pFTarg, tAnnInfo** appBoundingBoxesOut);
int tracker_display_frame(tAnnInfo* apBoundingBoxesIn, tFrameInfo* pFBase);

/**
 * This function take 2 BBs list
 * say BB1 and BB2
 * The function shall do an IoU map between the lists
 * and update the BBID in BB2 from BB1 where theres a match  
 */
void assess_iou_trackedBBs_detectedBBs(tAnnInfo* pTrackedBBs,
                tAnnInfo* pDetectedBBs);

#ifdef __cplusplus
}
#endif

#endif /**< __MULTITRACKER_H__ */
